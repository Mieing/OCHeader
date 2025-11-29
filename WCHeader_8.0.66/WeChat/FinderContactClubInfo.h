@class NSString;

@interface FinderContactClubInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *chatroomdId;
@property (nonatomic) unsigned int clubRole;

+ (void)initialize;

- (void)setClubRole:(unsigned int)a0;
- (unsigned int)clubRole;
- (void)setChatroomdId:(id)a0;
- (id)chatroomdId;

@end
