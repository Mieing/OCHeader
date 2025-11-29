@class NSString, NSArray;

@interface AWEIMImageResourceURLInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *oid;
@property (copy, nonatomic) NSString *skey;
@property (copy, nonatomic) NSArray *originURLList;
@property (copy, nonatomic) NSArray *mediumURLList;
@property (copy, nonatomic) NSArray *largeURLList;
@property (copy, nonatomic) NSArray *thumbURLList;
@property (copy, nonatomic) NSString *md5;
@property (nonatomic) long long dataSize;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (copy, nonatomic) NSArray *urlList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
