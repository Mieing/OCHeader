@class NSString;

@interface SalamanderAnnieX.IRequestMethodResponseData : NSObject {
    void /* unknown type, empty encoding */ httpCode;
    void /* unknown type, empty encoding */ clientCode;
    void /* function */ header;
    void /* function */ response;
    void /* function */ rawResponse;
    void /* unknown type, empty encoding */ prefetchStatus;
    void /* unknown type, empty encoding */ responseType;
    void /* function */ responseString;
}

@property (nonatomic, copy) id header;
@property (nonatomic, copy) id response;
@property (nonatomic, copy) NSString *rawResponse;
@property (nonatomic, copy) NSString *responseString;

- (void).cxx_destruct;
- (id)init;

@end
