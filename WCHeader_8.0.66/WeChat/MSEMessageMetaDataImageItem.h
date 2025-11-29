@class NSString;

@interface MSEMessageMetaDataImageItem : NSObject <PBCoding>

@property (retain, nonatomic) NSString *toUsername;
@property (retain, nonatomic) NSString *imageUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_toUsername;
+ (void)PBArrayAdd_imageUrl;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
