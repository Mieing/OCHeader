@class NSString, NSArray;

@interface AWEIMSilverWingStreamSubElementModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long idx;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSArray *range;
@property (nonatomic) BOOL isStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (id)getContentDict;
- (void).cxx_destruct;

@end
