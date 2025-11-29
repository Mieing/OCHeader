@class NSString, AWELastViewInteractiveButtonModel;

@interface AWESmartFeedLastViewModel : AWEBaseApiModel

@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *emptyMsg;
@property (copy, nonatomic) NSString *emptyButtonMsg;
@property (copy, nonatomic) NSString *itemID;
@property (nonatomic) unsigned long long viewType;
@property (retain, nonatomic) AWELastViewInteractiveButtonModel *interactiveButton;
@property (nonatomic) long long toastType;

+ (id)interactiveButtonJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
