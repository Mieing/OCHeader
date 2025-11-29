@interface WCFinderPostHelperParams : NSObject

@property (nonatomic) unsigned long long enterScene;
@property (nonatomic) unsigned long long createFrom;
@property (nonatomic) unsigned long long createScene;
@property (nonatomic) int profileEnterType;
@property (nonatomic) unsigned long long publisherEnterType;

+ (id)paramsWithEnterScene:(unsigned long long)a0 createFrom:(unsigned long long)a1 createScene:(unsigned long long)a2;

@end
