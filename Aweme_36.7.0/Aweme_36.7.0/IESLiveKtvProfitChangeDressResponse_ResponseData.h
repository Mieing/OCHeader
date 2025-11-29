@class HTSLiveMidiSkinDressInfo;

@interface IESLiveKtvProfitChangeDressResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveMidiSkinDressInfo *midiSkinInfo;
@property (nonatomic) BOOL hasMidiSkinInfo;

+ (id)descriptor;

@end
