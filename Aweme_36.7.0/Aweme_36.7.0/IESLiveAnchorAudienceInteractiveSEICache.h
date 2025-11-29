@interface IESLiveAnchorAudienceInteractiveSEICache : NSObject

+ (id)getUpdateKeysWithDataType:(unsigned long long)a0;
+ (id)getOldDataProtocolWithNewDataProtocol:(id)a0 updateKey:(id)a1;
+ (id)getOldDataProtocolArrWithNewDataProtocol:(id)a0 dataType:(unsigned long long)a1;

@end
