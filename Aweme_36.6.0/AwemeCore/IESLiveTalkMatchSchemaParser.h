@class NSString;

@interface IESLiveTalkMatchSchemaParser : NSObject <IESLiveSchemaParser>

@property (retain, nonatomic) NSString *tabSource;
@property (retain, nonatomic) NSString *sourcePage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_schema;

@end
