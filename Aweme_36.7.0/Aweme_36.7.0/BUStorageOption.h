@class NSString, NSMutableDictionary;

@interface BUStorageOption : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableDictionary *param;

- (void).cxx_destruct;

@end
