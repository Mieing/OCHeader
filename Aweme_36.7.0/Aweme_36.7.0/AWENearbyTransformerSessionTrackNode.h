@class NSString, NSDictionary, NSMutableArray;

@interface AWENearbyTransformerSessionTrackNode : NSObject

@property (retain, nonatomic) AWENearbyTransformerSessionTrackNode *parentNode;
@property (retain, nonatomic) NSMutableArray *childNode;
@property (retain, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSDictionary *commonParams;
@property (copy, nonatomic) NSDictionary *schemaParams;
@property (copy, nonatomic) NSDictionary *extraParams;

- (id)mergedCommonParams;
- (id)mergedTrackParams;
- (id)mergedSchemaParams;
- (id)mergedExtraParams;
- (id)initWithSessinID:(id)a0;
- (id)mergedDict:(id)a0 highPriDict:(id)a1;
- (void).cxx_destruct;

@end
