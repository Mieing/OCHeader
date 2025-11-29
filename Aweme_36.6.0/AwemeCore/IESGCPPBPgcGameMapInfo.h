@class NSString, IESGCPPBGameImageBundler;

@interface IESGCPPBPgcGameMapInfo : GPBMessage

@property (copy, nonatomic) NSString *mapId;
@property (copy, nonatomic) NSString *mapName;
@property (retain, nonatomic) IESGCPPBGameImageBundler *image;
@property (nonatomic) BOOL hasImage;
@property (copy, nonatomic) NSString *mapDescription;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *cgGameId;

+ (id)descriptor;

@end
