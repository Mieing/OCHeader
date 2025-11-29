@class NSString, NSDictionary, JSONModel, RTVVoipToastBody;
@protocol Optional;

@interface RTVVoipEventItem : JSONModel

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *userIMID;
@property (copy, nonatomic) NSDictionary<Optional> *contentDictionary;
@property (copy, nonatomic) NSString<Optional> *callID;
@property (retain, nonatomic) JSONModel<Optional> *content;
@property (copy, nonatomic) RTVVoipToastBody<Optional> *toastBody;

+ (id)keyMapper;
+ (id)modelCustomPropertyMapper;
+ (id)eventItemWithCallID:(id)a0 dictionary:(id)a1;

- (id)initWithCallID:(id)a0 dictionary:(id)a1;
- (id)contentConfigureTuple;
- (void).cxx_destruct;
- (id)description;

@end
