@class NSString, BDCastGCDWebServerResponse;
@protocol BDCastGCDWebServerBodyReader;

@interface BDCastGCDWebServerBodyEncoder : NSObject <BDCastGCDWebServerBodyReader> {
    BDCastGCDWebServerResponse *_response;
    id<BDCastGCDWebServerBodyReader> _reader;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
