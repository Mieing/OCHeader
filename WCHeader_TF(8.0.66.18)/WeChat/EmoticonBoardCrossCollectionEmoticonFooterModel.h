@class NSString;

@interface EmoticonBoardCrossCollectionEmoticonFooterModel : NSObject

@property (retain, nonatomic) NSString *errorTip;
@property (nonatomic) BOOL showLoading;
@property (nonatomic) BOOL showErrorTip;
@property (copy, nonatomic) id /* block */ onTap;

- (void).cxx_destruct;

@end
