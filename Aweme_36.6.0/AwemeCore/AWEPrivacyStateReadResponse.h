@class NSString, NSDictionary;

@interface AWEPrivacyStateReadResponse : AWESocialRelationResponse

@property (nonatomic) BOOL isExisted;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *filterReason;
@property (copy, nonatomic) NSDictionary *itemDictionary;

- (void).cxx_destruct;

@end
