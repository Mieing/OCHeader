@class StatusFooterJumpFinderProfile;

@interface TextState3rdPartyFinderProfileHandler : TextState3rdPartyBaseHandler

@property (retain, nonatomic) StatusFooterJumpFinderProfile *finderProfile;

- (id)initWithBuffer:(id)a0 keyBuffer:(id)a1;
- (unsigned int)type;
- (BOOL)preferCustomView;
- (id)customView;
- (BOOL)doSourceActionWithViewController:(id)a0 scene:(unsigned int)a1;
- (void).cxx_destruct;

@end
