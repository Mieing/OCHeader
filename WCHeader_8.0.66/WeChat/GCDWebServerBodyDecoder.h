@class NSString, GCDWebServerRequest;
@protocol GCDWebServerBodyWriter;

@interface GCDWebServerBodyDecoder : NSObject <GCDWebServerBodyWriter> {
    GCDWebServerRequest *_request;
    id<GCDWebServerBodyWriter> _writer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
