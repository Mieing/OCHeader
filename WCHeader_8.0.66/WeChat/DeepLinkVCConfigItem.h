@class NSString;

@interface DeepLinkVCConfigItem : NSObject

@property (retain, nonatomic) NSString *linkName;
@property (nonatomic) unsigned long long actionType;
@property (retain, nonatomic) NSString *actionName;

+ (id)genItemWithLinkName:(id)a0 actionType:(unsigned long long)a1 actionName:(id)a2;

- (id)init;
- (void).cxx_destruct;

@end
