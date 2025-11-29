@class NSString, NSArray;

@interface ACCDuetLayoutTrackModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long switchType;
@property (retain, nonatomic) NSArray *shootAtList;
@property (retain, nonatomic) NSArray *duetLayoutList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
