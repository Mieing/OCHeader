@class NSData, NSString;

@interface IESLiveDressResourceWebP : NSObject <IESLiveDressResourceProtocol>

@property (retain, nonatomic) NSData *data;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isResourceComplete;
- (void).cxx_destruct;

@end
