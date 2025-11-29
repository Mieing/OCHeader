@class NSString;

@interface SalamanderAnnieX.GetUserInfoUserInfo : NSObject {
    void /* function */ userID;
    void /* function */ shortID;
    void /* function */ secUserID;
    void /* function */ uniqueID;
    void /* function */ nickname;
    void /* function */ avatarURL;
    void /* unknown type, empty encoding */ hasBoundPhone;
    void /* unknown type, empty encoding */ isBoundPhone;
    void /* function */ bindPhone;
}

@property (nonatomic, copy) NSString *userID;
@property (nonatomic, copy) NSString *shortID;
@property (nonatomic, copy) NSString *secUserID;
@property (nonatomic, copy) NSString *uniqueID;
@property (nonatomic, copy) NSString *nickname;
@property (nonatomic, copy) NSString *avatarURL;
@property (nonatomic, copy) NSString *bindPhone;

- (void).cxx_destruct;
- (id)init;

@end
