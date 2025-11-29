@class NSString;

@interface AWEMVSelectedBillboardEntranceModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *lightIconUrlString;
@property (retain, nonatomic) NSString *darkIconUrlString;
@property (retain, nonatomic) NSString *titleString;
@property (retain, nonatomic) NSString *schemaString;
@property (retain, nonatomic) NSString *lightTextColorString;
@property (retain, nonatomic) NSString *darkTextColorString;
@property (retain, nonatomic) NSString *lightBackgroundColorString;
@property (retain, nonatomic) NSString *darkBackgroundColorString;
@property (nonatomic) unsigned long long month;
@property (nonatomic) unsigned long long term;
@property (nonatomic) double timeStamp;
@property (nonatomic) unsigned long long billboardType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initPlaceholderModelWithType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
