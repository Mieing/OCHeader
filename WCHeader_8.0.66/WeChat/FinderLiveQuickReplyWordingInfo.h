@class NSString, NSMutableArray;

@interface FinderLiveQuickReplyWordingInfo : NSObject <NSCopying>

@property (nonatomic) unsigned int flag;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSMutableArray *modelList;

+ (id)changeQuickReplyModelFromInfo:(id)a0;

- (id)initWithFinderWordingInfo:(id)a0;
- (id)getModelListWithWordList:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
