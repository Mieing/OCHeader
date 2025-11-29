@class NSMutableArray;

@interface MMBizMenuInfo : NSObject

@property (nonatomic) unsigned int uin;
@property (nonatomic) unsigned int interactiveMode;
@property (nonatomic) unsigned int updateTime;
@property (retain, nonatomic) NSMutableArray *arrMenu;
@property (nonatomic) unsigned int type;

+ (id)svgImageNameForShowIconType:(unsigned long long)a0;

- (id)init;
- (void)parseFromJsonDictionary:(id)a0;
- (void).cxx_destruct;

@end
