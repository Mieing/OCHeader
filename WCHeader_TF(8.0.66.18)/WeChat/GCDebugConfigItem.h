@class NSString;

@interface GCDebugConfigItem : NSObject

@property (nonatomic) unsigned long long itemType;
@property (retain, nonatomic) NSString *key;
@property (copy, nonatomic) id /* block */ didSelectBlock;

+ (id)configItemFromBoolValueArray:(id)a0;

- (void).cxx_destruct;

@end
