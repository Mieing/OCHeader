@class AWELocalFollowListSelectOption;

@interface AWEFollowListReadRequest : AWESocialRelationRequest

@property (nonatomic) unsigned long long followReadType;
@property (retain, nonatomic) AWELocalFollowListSelectOption *idReadOption;

- (void).cxx_destruct;
- (id)initWithScene:(id)a0;

@end
