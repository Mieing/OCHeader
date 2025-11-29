@class NSString, NSMutableArray, NSMutableDictionary;

@interface EmoticonLensItemConfig : NSObject <YYModel>

@property (nonatomic) long long lensType;
@property (retain, nonatomic) NSString *type;
@property (nonatomic) double version;
@property (retain, nonatomic) NSMutableArray *elements;
@property (retain, nonatomic) NSMutableDictionary *params;
@property (retain, nonatomic) NSString *id;
@property (retain, nonatomic) NSString *nameEn;
@property (retain, nonatomic) NSString *nameCn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

@end
