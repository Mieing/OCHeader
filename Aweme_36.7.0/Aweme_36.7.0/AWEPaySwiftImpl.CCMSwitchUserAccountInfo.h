@class NSString;

@interface AWEPaySwiftImpl.CCMSwitchUserAccountInfo : MTLModel <MTLJSONSerializing> {
    void /* function */ mainTitle;
    void /* function */ subTitleDesc;
    void /* function */ mobileMask;
    void /* function */ nickName;
    void /* function */ avatarUrl;
    void /* function */ origUid;
    void /* function */ trafficOpenStatusDesc;
    void /* function */ mainActionButton;
}

@property (nonatomic, copy) NSString *mainTitle;
@property (nonatomic, copy) NSString *subTitleDesc;
@property (nonatomic, copy) NSString *mobileMask;
@property (nonatomic, copy) NSString *nickName;
@property (nonatomic, copy) NSString *avatarUrl;
@property (nonatomic, copy) NSString *origUid;
@property (nonatomic, copy) NSString *trafficOpenStatusDesc;
@property (nonatomic, copy) NSString *mainActionButton;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
