@class NSString, NSData, NSMutableDictionary;

@interface WWKBaseObject : NSObject

@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *bundleName;
@property (nonatomic) unsigned long long sequence;
@property (readonly, nonatomic) NSData *serializedData;
@property (readonly, nonatomic) NSMutableDictionary *serializedDict;

+ (id)deserializeWithData:(id)a0;

- (id)init;
- (BOOL)deserializeWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
