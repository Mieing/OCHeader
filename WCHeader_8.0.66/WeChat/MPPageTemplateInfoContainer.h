@class NSString, NSMutableDictionary;

@interface MPPageTemplateInfoContainer : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableDictionary *templateInfoDic;
@property (nonatomic) unsigned int checkInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_templateInfoDic;
+ (void)PBArrayAdd_checkInterval;
+ (void)initialize;
+ (id)loadContainerFromPath:(id)a0;
+ (BOOL)saveContainer:(id)a0 toPath:(id)a1;

- (id)getPBPropertyTable;
- (id)getTemplateInfoWithType:(unsigned int)a0;
- (void)setTemplateInfo:(id)a0;
- (void).cxx_destruct;

@end
