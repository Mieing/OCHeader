@class NSString, WCFinderJumpNativeHotWord, NSData;

@interface WCFinderJumpNativeSearchParams : NSObject

@property (copy, nonatomic) NSString *feedTid;
@property (nonatomic) int scene;
@property (nonatomic) unsigned long long streamEntranceType;
@property (retain, nonatomic) WCFinderJumpNativeHotWord *objectHotWord;
@property (copy, nonatomic) NSString *objHotwordInfoBuffString;
@property (retain, nonatomic) NSData *objHotwordInfoBuff;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
