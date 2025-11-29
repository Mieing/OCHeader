@class NSString, NSData;

@interface BDCastGCDWebServerDataResponse : BDCastGCDWebServerResponse {
    NSData *_data;
    BOOL _done;
}

@property (copy, nonatomic) NSString *contentType;

+ (id)responseWithData:(id)a0 contentType:(id)a1;
+ (id)responseWithHTML:(id)a0;
+ (id)responseWithText:(id)a0;
+ (id)responseWithHTMLTemplate:(id)a0 variables:(id)a1;
+ (id)responseWithJSONObject:(id)a0;
+ (id)responseWithJSONObject:(id)a0 contentType:(id)a1;

- (id)initWithHTMLTemplate:(id)a0 variables:(id)a1;
- (id)initWithJSONObject:(id)a0 contentType:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (id)initWithJSONObject:(id)a0;
- (id)initWithText:(id)a0;
- (id)initWithData:(id)a0 contentType:(id)a1;
- (id)readData:(id *)a0;
- (id)initWithHTML:(id)a0;

@end
