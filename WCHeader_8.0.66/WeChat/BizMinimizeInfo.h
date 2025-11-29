@class FlutterStandardTypedData, NSString, NSNumber, BizRect;

@interface BizMinimizeInfo : NSObject

@property (retain, nonatomic) NSNumber *localId;
@property (retain, nonatomic) NSNumber *svrId;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) NSNumber *itemShowType;
@property (retain, nonatomic) FlutterStandardTypedData *coverImage;
@property (retain, nonatomic) FlutterStandardTypedData *animatedImage;
@property (retain, nonatomic) BizRect *animatedImageRect;

+ (id)makeWithLocalId:(id)a0 svrId:(id)a1 url:(id)a2 userName:(id)a3 nickName:(id)a4 title:(id)a5 coverUrl:(id)a6 itemShowType:(id)a7 coverImage:(id)a8 animatedImage:(id)a9 animatedImageRect:(id)a10;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
