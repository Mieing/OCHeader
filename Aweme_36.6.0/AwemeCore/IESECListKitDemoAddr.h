@class NSString, NSArray;

@interface IESECListKitDemoAddr : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *urlKey;
@property (copy, nonatomic) NSString *fileHash;
@property (copy, nonatomic) NSString *fileCS;
@property (copy, nonatomic) NSArray *urlList;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) long long dataSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
