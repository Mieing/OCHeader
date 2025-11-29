@class NSString, BDFileUploadiOSDNSLocalParser;

@interface BDFileUploadiOSDNSServerIP : NSObject <BDFileUploadiOSTimerEvent>

@property (nonatomic, getter=isParsing) BOOL parsing;
@property (nonatomic) double serverTime;
@property (copy, nonatomic) NSString *serverIP;
@property (retain, nonatomic) BDFileUploadiOSDNSLocalParser *parser;
@property (readonly, weak, nonatomic) id eventTarget;
@property (readonly, nonatomic) SEL eventSEL;
@property (readonly, nonatomic) long long eventTimeInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updateDNSServerIP;
+ (id)getServerIP;
+ (id)shareInstance;

@end
