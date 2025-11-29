@interface RequestProtocolV3 : RequestProtocol

+ (id)getQuerySliceUrl:(id)a0;
+ (id)getQuerySliceBody:(id)a0;
+ (id)getCompletedMsgUrl:(id)a0;
+ (id)getCompletedMsgBody:(id)a0;
+ (id)getPostDataSliceUrl:(id)a0;
+ (id)getContentType:(unsigned char)a0;
+ (id)getMethod:(unsigned char)a0;
+ (unsigned char)getStreamType:(unsigned char)a0;

@end
