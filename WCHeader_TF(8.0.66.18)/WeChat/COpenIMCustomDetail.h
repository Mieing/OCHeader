@class NSString, NSArray, NSDictionary;

@interface COpenIMCustomDetail : NSObject

@property (nonatomic) unsigned int resSubType;
@property (retain, nonatomic) NSString *icon;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) long long descType;
@property (retain, nonatomic) NSArray *imgUrls;
@property (nonatomic) long long action;
@property (retain, nonatomic) NSDictionary *action_param;

- (id)getDesc:(id)a0;
- (void).cxx_destruct;

@end
