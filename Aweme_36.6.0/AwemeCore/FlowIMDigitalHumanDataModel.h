@class NSString;

@interface FlowIMDigitalHumanDataModel : NSObject {
    void /* unknown type, empty encoding */ _uri;
    void /* unknown type, empty encoding */ _url;
    void /* unknown type, empty encoding */ _md5;
    void /* unknown type, empty encoding */ _digitalHumanType;
}

@property (nonatomic, copy) NSString *uri;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSString *md5;
@property (nonatomic) long long digitalHumanType;

- (void).cxx_destruct;
- (id)init;

@end
