@class OMJID, NSString;

@interface MJTTSRequestItem : NSObject

@property (readonly, nonatomic) OMJID *ttsSegmentID;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *roleID;
@property (readonly, nonatomic) NSString *roleName;
@property (readonly, nonatomic) NSString *audioFilePath;

- (id)initWithTTSSegmentID:(id)a0 text:(id)a1 roleID:(id)a2 roleName:(id)a3 audioFilePath:(id)a4;
- (void).cxx_destruct;

@end
