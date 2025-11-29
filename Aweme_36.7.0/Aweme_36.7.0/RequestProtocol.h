@interface RequestProtocol : NSObject

+ (Class)getClass:(long long)a0;
+ (id)getQuerySliceUrl:(id)a0 protocolType:(long long)a1;
+ (id)getQuerySliceBody:(id)a0 protocolType:(long long)a1;
+ (id)getCompletedMsgUrl:(id)a0 protocolType:(long long)a1;
+ (id)getCompletedMsgBody:(id)a0 protocolType:(long long)a1;
+ (id)getPostDataSliceUrl:(id)a0 protocolType:(long long)a1;
+ (id)getContentType:(long long)a0 requestType:(unsigned char)a1;
+ (id)getMethod:(long long)a0 requestType:(unsigned char)a1;
+ (unsigned char)getStreamType:(long long)a0 requestType:(unsigned char)a1;

@end
