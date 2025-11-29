@class HTSLiveBizMessage, HTSLiveCommon, HTSLiveRealtimeSuggest, HTSLiveBarStyle, HTSLiveBarMessage, NSString;

@interface HTSLiveRealtimeStatusNotifyMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveRealtimeSuggest *suggest;
@property (nonatomic) BOOL hasSuggest;
@property (retain, nonatomic) HTSLiveBizMessage *bizMessage;
@property (nonatomic) BOOL hasBizMessage;
@property (retain, nonatomic) HTSLiveBarMessage *barMessage;
@property (nonatomic) BOOL hasBarMessage;
@property (nonatomic) int showType;
@property (retain, nonatomic) HTSLiveBarStyle *barStyle;
@property (nonatomic) BOOL hasBarStyle;
@property (copy, nonatomic) NSString *schemaURL;

+ (id)descriptor;

@end
