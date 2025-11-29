@class NSNumber, NSString;

@interface IESIMGroupImpl.CreatePublicGroupPickerOpenCapabilityModel : IESIMGroupOpenCapabilityModel {
    void /* function */ panelTitle;
    void /* function */ contentTitle;
    void /* function */ buttonTitle;
    void /* function */ tips;
    void /* function */ dataRequestExt;
    void /* function */ bizExt;
    void /* function */ panelMobExt;
}

@property (nonatomic, retain) NSNumber *minSelectCount;
@property (nonatomic, retain) NSNumber *maxSelectCount;
@property (nonatomic, copy) NSString *panelTitle;
@property (nonatomic) long long headerStyle;
@property (nonatomic, copy) NSString *contentTitle;
@property (nonatomic, copy) NSString *buttonTitle;
@property (nonatomic, copy) NSString *tips;
@property (nonatomic) long long dataSourceScene;
@property (nonatomic) long long pageSize;
@property (nonatomic, copy) NSString *dataRequestExt;
@property (nonatomic) long long checkSource;
@property (nonatomic) long long createSource;
@property (nonatomic) long long groupType;
@property (nonatomic, copy) NSString *bizExt;
@property (nonatomic) BOOL enterChatOnCreate;
@property (nonatomic) BOOL needSyncMsg;
@property (nonatomic, copy) NSString *panelMobExt;

+ (id)optionalPropertyNameSet;

- (id)initWithString:(id)a0 usingEncoding:(unsigned long long)a1 error:(id *)a2;
- (id)initFromURLWithString:(id)a0 completion:(id /* block */)a1;
- (id)initWithTarget:(id)a0 bizLine:(long long)a1 bizScene:(id)a2 enterFrom:(id)a3 enterMethod:(id)a4;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithString:(id)a0 error:(id *)a1;

@end
