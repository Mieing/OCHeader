@class NSString;

@interface TextState3rdParty2022WinterOlympicLiveHandler : TextState3rdPartyBaseHandler

@property (retain, nonatomic) NSString *liveUsername;
@property (retain, nonatomic) NSString *liveNickname;
@property (retain, nonatomic) NSString *liveHeadUrl;

+ (id)liveShareItemFromXML:(id)a0;

- (unsigned int)type;
- (BOOL)doSourceActionWithViewController:(id)a0 scene:(unsigned int)a1;
- (id)initWithBuffer:(id)a0 keyBuffer:(id)a1;
- (void).cxx_destruct;

@end
