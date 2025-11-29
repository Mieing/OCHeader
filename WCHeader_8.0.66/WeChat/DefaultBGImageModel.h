@class NSString;

@interface DefaultBGImageModel : NSObject <YYModel>

@property (copy, nonatomic) NSString *objectID;
@property (copy, nonatomic) NSString *imageUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)toBuffer;
- (id)fromBuffer:(id)a0;
- (void).cxx_destruct;

@end
