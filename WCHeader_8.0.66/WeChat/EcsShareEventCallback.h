@interface EcsShareEventCallback : NSObject

@property (copy, nonatomic) id /* block */ didSelectItem;
@property (copy, nonatomic) id /* block */ didSelectContact;
@property (copy, nonatomic) id /* block */ didDismiss;
@property (copy, nonatomic) id /* block */ didShow;
@property (copy, nonatomic) id /* block */ onFail;
@property (copy, nonatomic) id /* block */ getAbosulteFilePath;

- (void).cxx_destruct;

@end
