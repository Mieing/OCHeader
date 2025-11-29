@class NSString;

@interface AWESearchAdCardRenderInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *searchAdCardName;
@property (nonatomic) long long docType;
@property (nonatomic) long long searchRenderType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
