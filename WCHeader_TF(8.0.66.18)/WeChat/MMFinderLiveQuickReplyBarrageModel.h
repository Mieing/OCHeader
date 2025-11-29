@class NSString, MMFinderLiveFloatMsg;

@interface MMFinderLiveQuickReplyBarrageModel : MMFinderLiveQuickReplyModel

@property (retain, nonatomic) id payload;
@property (retain, nonatomic) NSString *leadingImagePath;
@property (retain, nonatomic) NSString *trailingPAGPath;
@property (nonatomic) BOOL selected;
@property (retain, nonatomic) MMFinderLiveFloatMsg *floatMsg;
@property (copy, nonatomic) id /* block */ onSelectedDidChange;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
