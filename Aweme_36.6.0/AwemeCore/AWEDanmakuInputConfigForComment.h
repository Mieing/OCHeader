@class NSString;

@interface AWEDanmakuInputConfigForComment : NSObject <AWECommentDanmakuInputConfigProtocol>

@property (copy, nonatomic) NSString *prefixImagePath;
@property (copy, nonatomic) NSString *prefixImageUrl;
@property (nonatomic) double prefixImageRatio;
@property (copy, nonatomic) id /* block */ prefixImageDeleteBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
