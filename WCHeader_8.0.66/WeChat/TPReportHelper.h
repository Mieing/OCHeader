@interface TPReportHelper : NSObject

+ (long long)TPMediaTrackTypeToTPReportMediaTrackType:(unsigned long long)a0;
+ (long long)TPNetworkTypeToTPReportNetworkType:(long long)a0;
+ (long long)TPHlsTypeToTPReportHlsSourceType:(long long)a0;
+ (long long)TPPlayerTypeToTPReportPlayerType:(long long)a0;
+ (long long)TPUrlProtocolTypeToTPReportUrlProtocolType:(long long)a0;
+ (long long)TPDrmTypeToTPReportDrmType:(long long)a0;
+ (long long)TPDrmSecureLevelToTPReportDrmSecureLevel:(long long)a0;
+ (long long)TPDecoderTypeToTPReportVideoDecoderType:(long long)a0;
+ (long long)TPDecoderTypeToTPReportAudioDecoderType:(long long)a0;
+ (long long)TPDemuxerTypeToTPReportDemuxerType:(long long)a0;
+ (long long)TPRendererTypeToTPReportVideoRendererType:(long long)a0;
+ (long long)TPRendererTypeToTPReportAudioRendererType:(long long)a0;
+ (long long)findTarget:(long long)a0 inTable:(const long long[2] *)a1 withTableColumns:(long long)a2 defaultValue:(long long)a3;

@end
