@class NSString, NSMutableDictionary;

@interface WSSearchBarTagHolder : NSObject

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *displayTag;
@property (retain, nonatomic) NSString *tagName;
@property (retain, nonatomic) NSMutableDictionary *extInfo;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (id)initWithName:(id)a0 withType:(unsigned int)a1;
- (id)getExternalInfoByKey:(id)a0;
- (void)setExternalInfo:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;

@end
