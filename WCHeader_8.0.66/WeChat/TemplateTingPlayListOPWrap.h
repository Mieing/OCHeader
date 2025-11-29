@class NSString;

@interface TemplateTingPlayListOPWrap : NSObject <YYModel>

@property (retain, nonatomic) NSString *categoryId;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int listType;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *cover;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSString *generalString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (id)tingPlaylistOPWrapWithJSON:(id)a0;

- (id)toCategoryItem;
- (void).cxx_destruct;

@end
