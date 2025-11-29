@class IESLiveInteractionCropData, NSString, NSDictionary, HTSInteractionStreamAppData;

@interface IESLiveInteractiveSEIParseResult : NSObject

@property (retain, nonatomic) NSDictionary *metaSEI;
@property (retain, nonatomic) NSString *oppositeUserID;
@property (nonatomic) BOOL disableOppositeMic;
@property (nonatomic) long long ineractiveType;
@property (retain, nonatomic) HTSInteractionStreamAppData *appData;
@property (retain, nonatomic) IESLiveInteractionCropData *cropData;

- (void).cxx_destruct;
- (id)description;

@end
