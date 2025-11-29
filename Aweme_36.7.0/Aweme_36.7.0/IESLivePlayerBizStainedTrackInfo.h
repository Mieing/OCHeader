@class NSString;

@interface IESLivePlayerBizStainedTrackInfo : NSObject

@property (copy, nonatomic) NSString *bizDomain;
@property (copy, nonatomic) NSString *pageName;
@property (copy, nonatomic) NSString *blockName;
@property (copy, nonatomic) NSString *index;

+ (BOOL)isPlayerBizDomain:(id)a0 inTargetBizDomain:(id)a1;

- (id)useScene;
- (BOOL)hasNecessaryInfo;
- (id)dictionaryInfo;
- (id)defaultString:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
