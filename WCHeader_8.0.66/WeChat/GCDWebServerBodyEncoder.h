@class NSString, GCDWebServerResponse;
@protocol GCDWebServerBodyReader;

@interface GCDWebServerBodyEncoder : NSObject <GCDWebServerBodyReader> {
    GCDWebServerResponse *_response;
    id<GCDWebServerBodyReader> _reader;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
