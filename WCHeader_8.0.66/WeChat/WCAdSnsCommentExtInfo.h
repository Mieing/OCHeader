@class NSDictionary, NSString;

@interface WCAdSnsCommentExtInfo : NSObject <NSCoding, PBCoding>

@property (retain, nonatomic) NSDictionary *adTopicList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_adTopicList;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithAdExtInfo:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)parseTopicListWithTopicList:(id)a0;
- (void).cxx_destruct;

@end
