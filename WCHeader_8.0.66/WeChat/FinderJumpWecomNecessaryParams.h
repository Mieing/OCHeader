@class NSString;

@interface FinderJumpWecomNecessaryParams : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *kfUrl;
@property (retain, nonatomic) NSString *corpSubject;
@property (retain, nonatomic) NSString *contactId;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *searchContext;
@property (nonatomic) unsigned int scene;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (void)initialize;

@end
