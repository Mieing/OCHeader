@class NSString, NSDictionary;

@interface RTVVoipRoomInfo : JSONModel

@property (copy, nonatomic) NSString *roomID;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSDictionary *voipInfoDic;

+ (id)keyMapper;

- (void).cxx_destruct;

@end
