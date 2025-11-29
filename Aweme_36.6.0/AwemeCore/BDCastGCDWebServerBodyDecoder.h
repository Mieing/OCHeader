@class NSString, BDCastGCDWebServerRequest;
@protocol BDCastGCDWebServerBodyWriter;

@interface BDCastGCDWebServerBodyDecoder : NSObject <BDCastGCDWebServerBodyWriter> {
    BDCastGCDWebServerRequest *_request;
    id<BDCastGCDWebServerBodyWriter> _writer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
