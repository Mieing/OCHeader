@class NSString, MMRuleSetList, NSData;

@interface ChatBackgroundItem : NSObject

@property (nonatomic) long long cid;
@property (retain, nonatomic) NSString *basePath;
@property (retain, nonatomic) MMRuleSetList *m_ruleSetList;
@property (retain, nonatomic) NSData *thumbData;
@property (nonatomic) long long version;
@property (nonatomic) long long status;

+ (id)loadChatBackgroundItemFromPath:(id)a0;

- (id)keyPaths;
- (id)description;
- (id)fileOfImageNamed:(id)a0;
- (id)getBackgroundImagePath;
- (id)getThumbPath;
- (long long)getVersion;
- (void).cxx_destruct;

@end
